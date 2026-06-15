// fichero 39077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39077;

Registro39077 crear_registro39077(int id) {
    Registro39077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
