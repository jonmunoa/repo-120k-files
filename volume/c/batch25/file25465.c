// fichero 25465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25465;

Registro25465 crear_registro25465(int id) {
    Registro25465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
