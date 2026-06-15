// fichero 4877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4877;

Registro4877 crear_registro4877(int id) {
    Registro4877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
