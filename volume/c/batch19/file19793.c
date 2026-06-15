// fichero 19793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19793;

Registro19793 crear_registro19793(int id) {
    Registro19793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
