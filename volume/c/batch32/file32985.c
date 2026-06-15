// fichero 32985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32985;

Registro32985 crear_registro32985(int id) {
    Registro32985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
