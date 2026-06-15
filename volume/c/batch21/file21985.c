// fichero 21985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21985;

Registro21985 crear_registro21985(int id) {
    Registro21985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
