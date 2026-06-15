// fichero 22041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22041;

Registro22041 crear_registro22041(int id) {
    Registro22041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
