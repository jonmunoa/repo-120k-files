// fichero 38437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38437;

Registro38437 crear_registro38437(int id) {
    Registro38437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
