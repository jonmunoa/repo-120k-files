// fichero 27285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27285;

Registro27285 crear_registro27285(int id) {
    Registro27285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
