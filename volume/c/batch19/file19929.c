// fichero 19929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19929;

Registro19929 crear_registro19929(int id) {
    Registro19929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
