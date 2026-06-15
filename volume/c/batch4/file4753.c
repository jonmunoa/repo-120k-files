// fichero 4753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4753;

Registro4753 crear_registro4753(int id) {
    Registro4753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
