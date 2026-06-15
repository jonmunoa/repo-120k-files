// fichero 44581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44581;

Registro44581 crear_registro44581(int id) {
    Registro44581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
