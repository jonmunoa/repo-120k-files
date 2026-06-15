// fichero 1289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1289;

Registro1289 crear_registro1289(int id) {
    Registro1289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
