// fichero 40133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40133;

Registro40133 crear_registro40133(int id) {
    Registro40133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
