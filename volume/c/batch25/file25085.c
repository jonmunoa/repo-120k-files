// fichero 25085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25085;

Registro25085 crear_registro25085(int id) {
    Registro25085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
