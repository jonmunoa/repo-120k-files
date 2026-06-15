// fichero 19393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19393;

Registro19393 crear_registro19393(int id) {
    Registro19393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
