// fichero 49573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49573;

Registro49573 crear_registro49573(int id) {
    Registro49573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
