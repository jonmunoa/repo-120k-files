// fichero 1381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1381;

Registro1381 crear_registro1381(int id) {
    Registro1381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
