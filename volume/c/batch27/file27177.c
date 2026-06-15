// fichero 27177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27177;

Registro27177 crear_registro27177(int id) {
    Registro27177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
