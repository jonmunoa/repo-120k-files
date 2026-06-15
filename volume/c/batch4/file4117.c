// fichero 4117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4117;

Registro4117 crear_registro4117(int id) {
    Registro4117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
