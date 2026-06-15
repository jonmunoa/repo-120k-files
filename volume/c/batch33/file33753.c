// fichero 33753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33753;

Registro33753 crear_registro33753(int id) {
    Registro33753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
