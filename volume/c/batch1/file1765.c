// fichero 1765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1765;

Registro1765 crear_registro1765(int id) {
    Registro1765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
