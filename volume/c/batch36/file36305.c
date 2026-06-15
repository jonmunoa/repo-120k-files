// fichero 36305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36305;

Registro36305 crear_registro36305(int id) {
    Registro36305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
