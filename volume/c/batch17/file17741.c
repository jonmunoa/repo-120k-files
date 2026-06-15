// fichero 17741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17741;

Registro17741 crear_registro17741(int id) {
    Registro17741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
