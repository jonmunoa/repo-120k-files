// fichero 35641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35641;

Registro35641 crear_registro35641(int id) {
    Registro35641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
