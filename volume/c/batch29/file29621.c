// fichero 29621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29621;

Registro29621 crear_registro29621(int id) {
    Registro29621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
