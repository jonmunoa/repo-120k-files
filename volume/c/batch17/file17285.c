// fichero 17285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17285;

Registro17285 crear_registro17285(int id) {
    Registro17285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
