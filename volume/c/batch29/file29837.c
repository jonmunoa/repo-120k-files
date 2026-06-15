// fichero 29837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29837;

Registro29837 crear_registro29837(int id) {
    Registro29837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
