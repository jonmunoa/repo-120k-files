// fichero 33993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33993;

Registro33993 crear_registro33993(int id) {
    Registro33993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
