// fichero 22865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22865;

Registro22865 crear_registro22865(int id) {
    Registro22865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
