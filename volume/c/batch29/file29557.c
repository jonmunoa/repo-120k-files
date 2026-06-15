// fichero 29557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29557;

Registro29557 crear_registro29557(int id) {
    Registro29557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
