// fichero 11957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11957;

Registro11957 crear_registro11957(int id) {
    Registro11957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
