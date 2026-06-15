// fichero 18597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18597;

Registro18597 crear_registro18597(int id) {
    Registro18597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
