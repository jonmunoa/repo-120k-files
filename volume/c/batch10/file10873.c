// fichero 10873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10873;

Registro10873 crear_registro10873(int id) {
    Registro10873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
