// fichero 25285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25285;

Registro25285 crear_registro25285(int id) {
    Registro25285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
