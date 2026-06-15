// fichero 4953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4953;

Registro4953 crear_registro4953(int id) {
    Registro4953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
