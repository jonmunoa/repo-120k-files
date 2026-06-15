// fichero 29669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29669;

Registro29669 crear_registro29669(int id) {
    Registro29669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
