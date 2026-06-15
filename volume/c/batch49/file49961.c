// fichero 49961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49961;

Registro49961 crear_registro49961(int id) {
    Registro49961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
