// fichero 34229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34229;

Registro34229 crear_registro34229(int id) {
    Registro34229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
