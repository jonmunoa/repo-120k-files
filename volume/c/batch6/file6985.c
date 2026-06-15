// fichero 6985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6985;

Registro6985 crear_registro6985(int id) {
    Registro6985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
