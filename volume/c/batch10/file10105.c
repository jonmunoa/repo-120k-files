// fichero 10105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10105;

Registro10105 crear_registro10105(int id) {
    Registro10105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
