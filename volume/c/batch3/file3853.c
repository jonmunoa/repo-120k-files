// fichero 3853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3853;

Registro3853 crear_registro3853(int id) {
    Registro3853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
