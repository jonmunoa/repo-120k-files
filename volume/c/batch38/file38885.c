// fichero 38885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38885;

Registro38885 crear_registro38885(int id) {
    Registro38885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
