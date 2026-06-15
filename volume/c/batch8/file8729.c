// fichero 8729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8729;

Registro8729 crear_registro8729(int id) {
    Registro8729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
