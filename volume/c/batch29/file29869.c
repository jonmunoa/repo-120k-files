// fichero 29869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29869;

Registro29869 crear_registro29869(int id) {
    Registro29869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
