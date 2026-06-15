// fichero 27629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27629;

Registro27629 crear_registro27629(int id) {
    Registro27629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
