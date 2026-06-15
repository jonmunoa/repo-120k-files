// fichero 26345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26345;

Registro26345 crear_registro26345(int id) {
    Registro26345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
