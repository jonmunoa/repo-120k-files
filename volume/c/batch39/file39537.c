// fichero 39537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39537;

Registro39537 crear_registro39537(int id) {
    Registro39537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
