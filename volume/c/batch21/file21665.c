// fichero 21665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21665;

Registro21665 crear_registro21665(int id) {
    Registro21665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
