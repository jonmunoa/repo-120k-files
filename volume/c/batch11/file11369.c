// fichero 11369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11369;

Registro11369 crear_registro11369(int id) {
    Registro11369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
