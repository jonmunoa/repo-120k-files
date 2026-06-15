// fichero 8961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8961;

Registro8961 crear_registro8961(int id) {
    Registro8961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
