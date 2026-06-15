// fichero 25809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25809;

Registro25809 crear_registro25809(int id) {
    Registro25809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
