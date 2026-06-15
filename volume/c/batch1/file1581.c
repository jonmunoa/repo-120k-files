// fichero 1581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1581;

Registro1581 crear_registro1581(int id) {
    Registro1581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
