// fichero 12257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12257;

Registro12257 crear_registro12257(int id) {
    Registro12257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
