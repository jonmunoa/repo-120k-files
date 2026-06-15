// fichero 21581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21581;

Registro21581 crear_registro21581(int id) {
    Registro21581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
