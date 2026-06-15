// fichero 28757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28757;

Registro28757 crear_registro28757(int id) {
    Registro28757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
