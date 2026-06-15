// fichero 11741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11741;

Registro11741 crear_registro11741(int id) {
    Registro11741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
