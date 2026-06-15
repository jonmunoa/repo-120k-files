// fichero 33949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33949;

Registro33949 crear_registro33949(int id) {
    Registro33949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
