// fichero 8517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8517;

Registro8517 crear_registro8517(int id) {
    Registro8517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
