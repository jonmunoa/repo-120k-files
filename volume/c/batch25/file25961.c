// fichero 25961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25961;

Registro25961 crear_registro25961(int id) {
    Registro25961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
