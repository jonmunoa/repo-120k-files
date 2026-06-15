// fichero 5581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5581;

Registro5581 crear_registro5581(int id) {
    Registro5581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
