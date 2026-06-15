// fichero 19505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19505;

Registro19505 crear_registro19505(int id) {
    Registro19505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
