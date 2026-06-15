// fichero 21381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21381;

Registro21381 crear_registro21381(int id) {
    Registro21381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
