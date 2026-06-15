// fichero 19709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19709;

Registro19709 crear_registro19709(int id) {
    Registro19709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
