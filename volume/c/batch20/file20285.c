// fichero 20285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20285;

Registro20285 crear_registro20285(int id) {
    Registro20285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
