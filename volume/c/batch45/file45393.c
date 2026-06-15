// fichero 45393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45393;

Registro45393 crear_registro45393(int id) {
    Registro45393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
