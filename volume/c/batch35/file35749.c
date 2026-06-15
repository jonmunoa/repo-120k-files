// fichero 35749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35749;

Registro35749 crear_registro35749(int id) {
    Registro35749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
