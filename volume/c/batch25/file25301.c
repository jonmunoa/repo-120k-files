// fichero 25301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25301;

Registro25301 crear_registro25301(int id) {
    Registro25301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
