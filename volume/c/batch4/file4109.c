// fichero 4109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4109;

Registro4109 crear_registro4109(int id) {
    Registro4109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
