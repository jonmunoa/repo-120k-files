// fichero 45221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45221;

Registro45221 crear_registro45221(int id) {
    Registro45221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
