// fichero 35185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35185;

Registro35185 crear_registro35185(int id) {
    Registro35185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
