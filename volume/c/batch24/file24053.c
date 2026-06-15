// fichero 24053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24053;

Registro24053 crear_registro24053(int id) {
    Registro24053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
