// fichero 10365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10365;

Registro10365 crear_registro10365(int id) {
    Registro10365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
