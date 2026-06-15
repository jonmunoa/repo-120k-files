// fichero 19741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19741;

Registro19741 crear_registro19741(int id) {
    Registro19741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
