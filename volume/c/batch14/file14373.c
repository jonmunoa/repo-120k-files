// fichero 14373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14373;

Registro14373 crear_registro14373(int id) {
    Registro14373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
