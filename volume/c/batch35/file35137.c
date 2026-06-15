// fichero 35137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35137;

Registro35137 crear_registro35137(int id) {
    Registro35137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
