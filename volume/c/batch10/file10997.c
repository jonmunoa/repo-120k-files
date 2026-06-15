// fichero 10997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10997;

Registro10997 crear_registro10997(int id) {
    Registro10997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
