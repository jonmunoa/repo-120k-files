// fichero 24133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24133;

Registro24133 crear_registro24133(int id) {
    Registro24133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
