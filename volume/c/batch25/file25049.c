// fichero 25049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25049;

Registro25049 crear_registro25049(int id) {
    Registro25049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
