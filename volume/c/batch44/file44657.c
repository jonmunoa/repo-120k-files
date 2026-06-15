// fichero 44657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44657;

Registro44657 crear_registro44657(int id) {
    Registro44657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
