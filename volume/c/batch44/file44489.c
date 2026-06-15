// fichero 44489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44489;

Registro44489 crear_registro44489(int id) {
    Registro44489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
