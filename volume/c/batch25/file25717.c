// fichero 25717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25717;

Registro25717 crear_registro25717(int id) {
    Registro25717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
