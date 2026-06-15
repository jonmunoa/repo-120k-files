// fichero 29569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29569;

Registro29569 crear_registro29569(int id) {
    Registro29569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
