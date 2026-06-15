// fichero 25929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25929;

Registro25929 crear_registro25929(int id) {
    Registro25929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
