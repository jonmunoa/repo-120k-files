// fichero 5949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5949;

Registro5949 crear_registro5949(int id) {
    Registro5949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
