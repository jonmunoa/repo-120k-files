// fichero 28033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28033;

Registro28033 crear_registro28033(int id) {
    Registro28033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
