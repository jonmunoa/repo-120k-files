// fichero 10489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10489;

Registro10489 crear_registro10489(int id) {
    Registro10489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
