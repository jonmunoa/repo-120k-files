// fichero 44957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44957;

Registro44957 crear_registro44957(int id) {
    Registro44957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
