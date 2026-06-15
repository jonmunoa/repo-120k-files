// fichero 24869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24869;

Registro24869 crear_registro24869(int id) {
    Registro24869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
