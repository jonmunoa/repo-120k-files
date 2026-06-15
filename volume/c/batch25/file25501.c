// fichero 25501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25501;

Registro25501 crear_registro25501(int id) {
    Registro25501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
