// fichero 19413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19413;

Registro19413 crear_registro19413(int id) {
    Registro19413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
