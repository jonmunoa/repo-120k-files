// fichero 6961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6961;

Registro6961 crear_registro6961(int id) {
    Registro6961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
