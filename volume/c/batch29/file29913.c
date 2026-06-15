// fichero 29913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29913;

Registro29913 crear_registro29913(int id) {
    Registro29913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
