// fichero 41053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41053;

Registro41053 crear_registro41053(int id) {
    Registro41053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
