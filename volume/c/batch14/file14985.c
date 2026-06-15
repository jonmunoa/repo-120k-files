// fichero 14985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14985;

Registro14985 crear_registro14985(int id) {
    Registro14985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
