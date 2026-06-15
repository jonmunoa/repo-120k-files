// fichero 30765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30765;

Registro30765 crear_registro30765(int id) {
    Registro30765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
