// fichero 19477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19477;

Registro19477 crear_registro19477(int id) {
    Registro19477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
