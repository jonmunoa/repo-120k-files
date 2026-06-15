// fichero 19581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19581;

Registro19581 crear_registro19581(int id) {
    Registro19581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
