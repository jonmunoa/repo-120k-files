// fichero 35525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35525;

Registro35525 crear_registro35525(int id) {
    Registro35525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
