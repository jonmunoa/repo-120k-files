// fichero 19081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19081;

Registro19081 crear_registro19081(int id) {
    Registro19081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
