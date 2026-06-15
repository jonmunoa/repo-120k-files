// fichero 19077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19077;

Registro19077 crear_registro19077(int id) {
    Registro19077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
