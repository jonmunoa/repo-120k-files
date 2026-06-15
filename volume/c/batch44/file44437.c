// fichero 44437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44437;

Registro44437 crear_registro44437(int id) {
    Registro44437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
