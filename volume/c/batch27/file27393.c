// fichero 27393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27393;

Registro27393 crear_registro27393(int id) {
    Registro27393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
