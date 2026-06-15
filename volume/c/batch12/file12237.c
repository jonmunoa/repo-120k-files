// fichero 12237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12237;

Registro12237 crear_registro12237(int id) {
    Registro12237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
