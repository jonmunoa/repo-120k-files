// fichero 1949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1949;

Registro1949 crear_registro1949(int id) {
    Registro1949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
