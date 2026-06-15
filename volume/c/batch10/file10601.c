// fichero 10601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10601;

Registro10601 crear_registro10601(int id) {
    Registro10601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
