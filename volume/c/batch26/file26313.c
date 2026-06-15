// fichero 26313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26313;

Registro26313 crear_registro26313(int id) {
    Registro26313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
