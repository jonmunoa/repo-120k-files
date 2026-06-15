// fichero 11825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11825;

Registro11825 crear_registro11825(int id) {
    Registro11825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
