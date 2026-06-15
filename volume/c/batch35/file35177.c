// fichero 35177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35177;

Registro35177 crear_registro35177(int id) {
    Registro35177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
