// fichero 15949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15949;

Registro15949 crear_registro15949(int id) {
    Registro15949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
