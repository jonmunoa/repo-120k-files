// fichero 44077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44077;

Registro44077 crear_registro44077(int id) {
    Registro44077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
