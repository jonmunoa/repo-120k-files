// fichero 19217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19217;

Registro19217 crear_registro19217(int id) {
    Registro19217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
