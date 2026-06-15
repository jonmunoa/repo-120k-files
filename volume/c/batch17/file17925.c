// fichero 17925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17925;

Registro17925 crear_registro17925(int id) {
    Registro17925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
