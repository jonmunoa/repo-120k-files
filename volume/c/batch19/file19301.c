// fichero 19301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19301;

Registro19301 crear_registro19301(int id) {
    Registro19301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
