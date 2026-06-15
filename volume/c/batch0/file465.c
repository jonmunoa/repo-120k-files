// fichero 465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro465;

Registro465 crear_registro465(int id) {
    Registro465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
