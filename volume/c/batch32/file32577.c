// fichero 32577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32577;

Registro32577 crear_registro32577(int id) {
    Registro32577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
