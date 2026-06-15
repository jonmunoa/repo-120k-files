// fichero 25045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25045;

Registro25045 crear_registro25045(int id) {
    Registro25045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
