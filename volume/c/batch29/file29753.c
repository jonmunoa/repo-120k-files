// fichero 29753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29753;

Registro29753 crear_registro29753(int id) {
    Registro29753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
