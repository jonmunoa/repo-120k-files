// fichero 35021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35021;

Registro35021 crear_registro35021(int id) {
    Registro35021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
