// fichero 38429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38429;

Registro38429 crear_registro38429(int id) {
    Registro38429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
