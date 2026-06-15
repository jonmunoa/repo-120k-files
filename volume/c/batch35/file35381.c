// fichero 35381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35381;

Registro35381 crear_registro35381(int id) {
    Registro35381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
