// fichero 22241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22241;

Registro22241 crear_registro22241(int id) {
    Registro22241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
