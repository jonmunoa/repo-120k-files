// fichero 39881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39881;

Registro39881 crear_registro39881(int id) {
    Registro39881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
