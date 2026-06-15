// fichero 29041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29041;

Registro29041 crear_registro29041(int id) {
    Registro29041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
