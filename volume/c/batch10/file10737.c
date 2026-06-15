// fichero 10737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10737;

Registro10737 crear_registro10737(int id) {
    Registro10737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
