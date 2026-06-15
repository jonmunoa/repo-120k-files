// fichero 6285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6285;

Registro6285 crear_registro6285(int id) {
    Registro6285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
