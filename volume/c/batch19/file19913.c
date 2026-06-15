// fichero 19913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19913;

Registro19913 crear_registro19913(int id) {
    Registro19913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
