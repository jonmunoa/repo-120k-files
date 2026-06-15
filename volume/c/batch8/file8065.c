// fichero 8065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8065;

Registro8065 crear_registro8065(int id) {
    Registro8065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
