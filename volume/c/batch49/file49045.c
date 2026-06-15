// fichero 49045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49045;

Registro49045 crear_registro49045(int id) {
    Registro49045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
