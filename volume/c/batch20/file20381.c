// fichero 20381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20381;

Registro20381 crear_registro20381(int id) {
    Registro20381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
