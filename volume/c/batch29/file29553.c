// fichero 29553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29553;

Registro29553 crear_registro29553(int id) {
    Registro29553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
