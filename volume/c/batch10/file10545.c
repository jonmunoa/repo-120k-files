// fichero 10545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10545;

Registro10545 crear_registro10545(int id) {
    Registro10545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
