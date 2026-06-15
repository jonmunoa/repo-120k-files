// fichero 41381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41381;

Registro41381 crear_registro41381(int id) {
    Registro41381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
