// fichero 27761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27761;

Registro27761 crear_registro27761(int id) {
    Registro27761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
