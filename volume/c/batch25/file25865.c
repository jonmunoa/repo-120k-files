// fichero 25865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25865;

Registro25865 crear_registro25865(int id) {
    Registro25865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
