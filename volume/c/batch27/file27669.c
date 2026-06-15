// fichero 27669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27669;

Registro27669 crear_registro27669(int id) {
    Registro27669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
