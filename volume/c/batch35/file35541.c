// fichero 35541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35541;

Registro35541 crear_registro35541(int id) {
    Registro35541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
