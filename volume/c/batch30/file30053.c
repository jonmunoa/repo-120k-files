// fichero 30053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30053;

Registro30053 crear_registro30053(int id) {
    Registro30053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
