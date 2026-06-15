// fichero 10853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10853;

Registro10853 crear_registro10853(int id) {
    Registro10853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
