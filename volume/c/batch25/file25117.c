// fichero 25117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25117;

Registro25117 crear_registro25117(int id) {
    Registro25117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
