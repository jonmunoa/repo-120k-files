// fichero 25277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25277;

Registro25277 crear_registro25277(int id) {
    Registro25277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
