// fichero 25165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25165;

Registro25165 crear_registro25165(int id) {
    Registro25165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
