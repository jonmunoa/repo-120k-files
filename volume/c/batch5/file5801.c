// fichero 5801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5801;

Registro5801 crear_registro5801(int id) {
    Registro5801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
