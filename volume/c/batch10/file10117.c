// fichero 10117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10117;

Registro10117 crear_registro10117(int id) {
    Registro10117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
