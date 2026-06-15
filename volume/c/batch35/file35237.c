// fichero 35237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35237;

Registro35237 crear_registro35237(int id) {
    Registro35237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
