// fichero 25629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25629;

Registro25629 crear_registro25629(int id) {
    Registro25629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
