// fichero 26501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26501;

Registro26501 crear_registro26501(int id) {
    Registro26501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
