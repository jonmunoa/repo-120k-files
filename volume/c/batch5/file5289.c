// fichero 5289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5289;

Registro5289 crear_registro5289(int id) {
    Registro5289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
