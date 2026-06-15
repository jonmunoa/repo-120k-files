// fichero 31369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31369;

Registro31369 crear_registro31369(int id) {
    Registro31369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
