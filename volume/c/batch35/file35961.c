// fichero 35961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35961;

Registro35961 crear_registro35961(int id) {
    Registro35961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
