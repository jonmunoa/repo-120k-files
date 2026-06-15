// fichero 26757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26757;

Registro26757 crear_registro26757(int id) {
    Registro26757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
