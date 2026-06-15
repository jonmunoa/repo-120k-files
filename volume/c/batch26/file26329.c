// fichero 26329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26329;

Registro26329 crear_registro26329(int id) {
    Registro26329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
