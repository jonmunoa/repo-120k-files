// fichero 27581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27581;

Registro27581 crear_registro27581(int id) {
    Registro27581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
