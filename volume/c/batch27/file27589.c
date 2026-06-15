// fichero 27589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27589;

Registro27589 crear_registro27589(int id) {
    Registro27589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
