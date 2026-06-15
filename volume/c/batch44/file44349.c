// fichero 44349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44349;

Registro44349 crear_registro44349(int id) {
    Registro44349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
