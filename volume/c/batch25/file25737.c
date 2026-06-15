// fichero 25737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25737;

Registro25737 crear_registro25737(int id) {
    Registro25737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
