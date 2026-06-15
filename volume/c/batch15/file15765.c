// fichero 15765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15765;

Registro15765 crear_registro15765(int id) {
    Registro15765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
