// fichero 10973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10973;

Registro10973 crear_registro10973(int id) {
    Registro10973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
