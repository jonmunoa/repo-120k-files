// fichero 285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro285;

Registro285 crear_registro285(int id) {
    Registro285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
