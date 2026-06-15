// fichero 44941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44941;

Registro44941 crear_registro44941(int id) {
    Registro44941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
