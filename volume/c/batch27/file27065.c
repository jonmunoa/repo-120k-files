// fichero 27065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27065;

Registro27065 crear_registro27065(int id) {
    Registro27065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
