// fichero 19933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19933;

Registro19933 crear_registro19933(int id) {
    Registro19933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
