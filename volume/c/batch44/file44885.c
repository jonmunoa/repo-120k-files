// fichero 44885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44885;

Registro44885 crear_registro44885(int id) {
    Registro44885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
