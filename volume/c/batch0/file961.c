// fichero 961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro961;

Registro961 crear_registro961(int id) {
    Registro961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
