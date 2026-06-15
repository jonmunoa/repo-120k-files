// fichero 10205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10205;

Registro10205 crear_registro10205(int id) {
    Registro10205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
