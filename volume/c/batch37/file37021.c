// fichero 37021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37021;

Registro37021 crear_registro37021(int id) {
    Registro37021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
