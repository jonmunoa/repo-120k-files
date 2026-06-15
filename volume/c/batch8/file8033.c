// fichero 8033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8033;

Registro8033 crear_registro8033(int id) {
    Registro8033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
