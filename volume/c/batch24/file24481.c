// fichero 24481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24481;

Registro24481 crear_registro24481(int id) {
    Registro24481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
