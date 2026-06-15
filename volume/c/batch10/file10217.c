// fichero 10217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10217;

Registro10217 crear_registro10217(int id) {
    Registro10217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
