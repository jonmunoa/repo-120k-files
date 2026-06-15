// fichero 3053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3053;

Registro3053 crear_registro3053(int id) {
    Registro3053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
