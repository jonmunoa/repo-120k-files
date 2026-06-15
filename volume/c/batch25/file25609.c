// fichero 25609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25609;

Registro25609 crear_registro25609(int id) {
    Registro25609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
