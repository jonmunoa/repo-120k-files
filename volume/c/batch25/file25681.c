// fichero 25681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25681;

Registro25681 crear_registro25681(int id) {
    Registro25681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
