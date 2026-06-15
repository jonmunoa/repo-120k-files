// fichero 18061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18061;

Registro18061 crear_registro18061(int id) {
    Registro18061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
