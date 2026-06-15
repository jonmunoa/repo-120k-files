// fichero 10733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10733;

Registro10733 crear_registro10733(int id) {
    Registro10733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
