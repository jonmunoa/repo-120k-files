// fichero 12537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12537;

Registro12537 crear_registro12537(int id) {
    Registro12537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
