// fichero 45765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45765;

Registro45765 crear_registro45765(int id) {
    Registro45765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
