// fichero 12469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12469;

Registro12469 crear_registro12469(int id) {
    Registro12469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
