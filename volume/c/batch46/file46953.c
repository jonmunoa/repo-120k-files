// fichero 46953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46953;

Registro46953 crear_registro46953(int id) {
    Registro46953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
