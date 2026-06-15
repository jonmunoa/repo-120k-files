// fichero 28705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28705;

Registro28705 crear_registro28705(int id) {
    Registro28705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
