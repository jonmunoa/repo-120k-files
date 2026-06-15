// fichero 39821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39821;

Registro39821 crear_registro39821(int id) {
    Registro39821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
