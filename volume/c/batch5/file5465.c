// fichero 5465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5465;

Registro5465 crear_registro5465(int id) {
    Registro5465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
