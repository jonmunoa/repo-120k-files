// fichero 31285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31285;

Registro31285 crear_registro31285(int id) {
    Registro31285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
