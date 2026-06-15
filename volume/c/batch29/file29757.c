// fichero 29757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29757;

Registro29757 crear_registro29757(int id) {
    Registro29757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
