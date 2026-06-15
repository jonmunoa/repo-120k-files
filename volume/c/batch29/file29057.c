// fichero 29057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29057;

Registro29057 crear_registro29057(int id) {
    Registro29057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
