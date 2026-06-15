// fichero 11709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11709;

Registro11709 crear_registro11709(int id) {
    Registro11709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
