// fichero 28297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28297;

Registro28297 crear_registro28297(int id) {
    Registro28297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
