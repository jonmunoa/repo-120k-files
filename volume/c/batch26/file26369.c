// fichero 26369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26369;

Registro26369 crear_registro26369(int id) {
    Registro26369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
