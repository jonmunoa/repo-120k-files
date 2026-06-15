// fichero 19573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19573;

Registro19573 crear_registro19573(int id) {
    Registro19573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
