// fichero 10001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10001;

Registro10001 crear_registro10001(int id) {
    Registro10001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
