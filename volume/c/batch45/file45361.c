// fichero 45361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45361;

Registro45361 crear_registro45361(int id) {
    Registro45361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
