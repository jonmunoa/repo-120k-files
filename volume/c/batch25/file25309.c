// fichero 25309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25309;

Registro25309 crear_registro25309(int id) {
    Registro25309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
