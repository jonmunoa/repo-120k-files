// fichero 34821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34821;

Registro34821 crear_registro34821(int id) {
    Registro34821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
