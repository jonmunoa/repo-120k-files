// fichero 22057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22057;

Registro22057 crear_registro22057(int id) {
    Registro22057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
