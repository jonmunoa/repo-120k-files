// fichero 11381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11381;

Registro11381 crear_registro11381(int id) {
    Registro11381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
