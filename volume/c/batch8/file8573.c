// fichero 8573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8573;

Registro8573 crear_registro8573(int id) {
    Registro8573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
