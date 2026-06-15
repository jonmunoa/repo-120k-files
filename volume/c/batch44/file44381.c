// fichero 44381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44381;

Registro44381 crear_registro44381(int id) {
    Registro44381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
