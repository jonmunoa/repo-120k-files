// fichero 5357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5357;

Registro5357 crear_registro5357(int id) {
    Registro5357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
