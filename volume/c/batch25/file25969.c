// fichero 25969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25969;

Registro25969 crear_registro25969(int id) {
    Registro25969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
