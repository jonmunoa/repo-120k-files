// fichero 29081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29081;

Registro29081 crear_registro29081(int id) {
    Registro29081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
