// fichero 29641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29641;

Registro29641 crear_registro29641(int id) {
    Registro29641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
