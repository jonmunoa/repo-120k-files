// fichero 44573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44573;

Registro44573 crear_registro44573(int id) {
    Registro44573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
