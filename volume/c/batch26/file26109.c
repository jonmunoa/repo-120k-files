// fichero 26109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26109;

Registro26109 crear_registro26109(int id) {
    Registro26109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
