// fichero 26393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26393;

Registro26393 crear_registro26393(int id) {
    Registro26393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
