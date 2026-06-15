// fichero 6053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6053;

Registro6053 crear_registro6053(int id) {
    Registro6053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
