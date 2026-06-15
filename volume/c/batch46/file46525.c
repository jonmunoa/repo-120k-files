// fichero 46525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46525;

Registro46525 crear_registro46525(int id) {
    Registro46525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
