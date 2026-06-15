// fichero 26117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26117;

Registro26117 crear_registro26117(int id) {
    Registro26117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
