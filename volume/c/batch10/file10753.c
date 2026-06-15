// fichero 10753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10753;

Registro10753 crear_registro10753(int id) {
    Registro10753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
