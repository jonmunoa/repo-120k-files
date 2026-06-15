// fichero 38329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38329;

Registro38329 crear_registro38329(int id) {
    Registro38329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
