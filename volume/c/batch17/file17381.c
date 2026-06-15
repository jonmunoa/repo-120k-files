// fichero 17381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17381;

Registro17381 crear_registro17381(int id) {
    Registro17381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
