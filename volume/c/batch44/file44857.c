// fichero 44857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44857;

Registro44857 crear_registro44857(int id) {
    Registro44857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
