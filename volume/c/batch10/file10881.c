// fichero 10881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10881;

Registro10881 crear_registro10881(int id) {
    Registro10881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
