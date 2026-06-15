// fichero 25853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25853;

Registro25853 crear_registro25853(int id) {
    Registro25853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
