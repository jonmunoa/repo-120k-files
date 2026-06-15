// fichero 48949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48949;

Registro48949 crear_registro48949(int id) {
    Registro48949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
