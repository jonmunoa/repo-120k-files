// fichero 38065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38065;

Registro38065 crear_registro38065(int id) {
    Registro38065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
