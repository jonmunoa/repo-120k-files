// fichero 27957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27957;

Registro27957 crear_registro27957(int id) {
    Registro27957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
