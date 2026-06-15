// fichero 5845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5845;

Registro5845 crear_registro5845(int id) {
    Registro5845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
