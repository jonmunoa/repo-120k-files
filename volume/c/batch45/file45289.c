// fichero 45289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45289;

Registro45289 crear_registro45289(int id) {
    Registro45289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
