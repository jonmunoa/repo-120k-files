// fichero 47517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47517;

Registro47517 crear_registro47517(int id) {
    Registro47517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
