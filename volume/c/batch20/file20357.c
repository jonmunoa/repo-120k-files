// fichero 20357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20357;

Registro20357 crear_registro20357(int id) {
    Registro20357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
