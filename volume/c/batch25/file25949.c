// fichero 25949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25949;

Registro25949 crear_registro25949(int id) {
    Registro25949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
