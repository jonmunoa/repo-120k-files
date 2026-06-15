// fichero 45053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45053;

Registro45053 crear_registro45053(int id) {
    Registro45053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
