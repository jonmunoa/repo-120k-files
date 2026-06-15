// fichero 18949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18949;

Registro18949 crear_registro18949(int id) {
    Registro18949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
