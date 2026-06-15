// fichero 8461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8461;

Registro8461 crear_registro8461(int id) {
    Registro8461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
