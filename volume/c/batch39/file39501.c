// fichero 39501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39501;

Registro39501 crear_registro39501(int id) {
    Registro39501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
