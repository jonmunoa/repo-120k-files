// fichero 49109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49109;

Registro49109 crear_registro49109(int id) {
    Registro49109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
