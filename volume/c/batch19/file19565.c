// fichero 19565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19565;

Registro19565 crear_registro19565(int id) {
    Registro19565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
