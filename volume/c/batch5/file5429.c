// fichero 5429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5429;

Registro5429 crear_registro5429(int id) {
    Registro5429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
