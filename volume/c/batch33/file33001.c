// fichero 33001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33001;

Registro33001 crear_registro33001(int id) {
    Registro33001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
