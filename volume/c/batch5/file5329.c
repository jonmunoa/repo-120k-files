// fichero 5329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5329;

Registro5329 crear_registro5329(int id) {
    Registro5329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
