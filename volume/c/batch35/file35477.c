// fichero 35477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35477;

Registro35477 crear_registro35477(int id) {
    Registro35477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
