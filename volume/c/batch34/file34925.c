// fichero 34925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34925;

Registro34925 crear_registro34925(int id) {
    Registro34925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
