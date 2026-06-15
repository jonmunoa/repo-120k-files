// fichero 25661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25661;

Registro25661 crear_registro25661(int id) {
    Registro25661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
