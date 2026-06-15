// fichero 6949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6949;

Registro6949 crear_registro6949(int id) {
    Registro6949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
