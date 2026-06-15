// fichero 28465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28465;

Registro28465 crear_registro28465(int id) {
    Registro28465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
