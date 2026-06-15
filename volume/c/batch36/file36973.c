// fichero 36973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36973;

Registro36973 crear_registro36973(int id) {
    Registro36973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
