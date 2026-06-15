// fichero 20765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20765;

Registro20765 crear_registro20765(int id) {
    Registro20765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
