// fichero 44469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44469;

Registro44469 crear_registro44469(int id) {
    Registro44469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
