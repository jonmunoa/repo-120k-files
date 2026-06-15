// fichero 20053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20053;

Registro20053 crear_registro20053(int id) {
    Registro20053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
