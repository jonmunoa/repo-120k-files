// fichero 24953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24953;

Registro24953 crear_registro24953(int id) {
    Registro24953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
