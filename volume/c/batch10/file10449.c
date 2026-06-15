// fichero 10449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10449;

Registro10449 crear_registro10449(int id) {
    Registro10449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
