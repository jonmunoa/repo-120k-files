// fichero 24581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24581;

Registro24581 crear_registro24581(int id) {
    Registro24581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
