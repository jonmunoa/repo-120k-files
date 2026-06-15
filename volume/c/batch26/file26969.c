// fichero 26969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26969;

Registro26969 crear_registro26969(int id) {
    Registro26969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
