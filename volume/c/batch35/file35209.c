// fichero 35209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35209;

Registro35209 crear_registro35209(int id) {
    Registro35209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
