// fichero 25913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25913;

Registro25913 crear_registro25913(int id) {
    Registro25913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
