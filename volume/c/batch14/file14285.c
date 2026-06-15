// fichero 14285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14285;

Registro14285 crear_registro14285(int id) {
    Registro14285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
