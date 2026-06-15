// fichero 19025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19025;

Registro19025 crear_registro19025(int id) {
    Registro19025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
