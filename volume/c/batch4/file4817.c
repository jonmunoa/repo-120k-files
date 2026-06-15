// fichero 4817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4817;

Registro4817 crear_registro4817(int id) {
    Registro4817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
