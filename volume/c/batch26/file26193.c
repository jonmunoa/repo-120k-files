// fichero 26193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26193;

Registro26193 crear_registro26193(int id) {
    Registro26193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
