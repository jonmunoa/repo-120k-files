// fichero 37517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37517;

Registro37517 crear_registro37517(int id) {
    Registro37517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
