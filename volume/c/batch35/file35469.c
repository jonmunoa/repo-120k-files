// fichero 35469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35469;

Registro35469 crear_registro35469(int id) {
    Registro35469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
