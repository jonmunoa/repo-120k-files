// fichero 25469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25469;

Registro25469 crear_registro25469(int id) {
    Registro25469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
