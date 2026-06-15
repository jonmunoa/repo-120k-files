// fichero 14577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14577;

Registro14577 crear_registro14577(int id) {
    Registro14577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
