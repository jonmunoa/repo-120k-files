// fichero 26961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26961;

Registro26961 crear_registro26961(int id) {
    Registro26961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
