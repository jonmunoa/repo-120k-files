// fichero 29061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29061;

Registro29061 crear_registro29061(int id) {
    Registro29061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
