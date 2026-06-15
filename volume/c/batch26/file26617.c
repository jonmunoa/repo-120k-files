// fichero 26617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26617;

Registro26617 crear_registro26617(int id) {
    Registro26617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
