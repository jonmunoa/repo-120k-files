// fichero 29053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29053;

Registro29053 crear_registro29053(int id) {
    Registro29053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
