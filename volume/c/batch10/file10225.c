// fichero 10225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10225;

Registro10225 crear_registro10225(int id) {
    Registro10225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
