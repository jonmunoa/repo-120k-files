// fichero 25617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25617;

Registro25617 crear_registro25617(int id) {
    Registro25617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
