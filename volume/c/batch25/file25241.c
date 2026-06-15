// fichero 25241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25241;

Registro25241 crear_registro25241(int id) {
    Registro25241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
