// fichero 10821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10821;

Registro10821 crear_registro10821(int id) {
    Registro10821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
