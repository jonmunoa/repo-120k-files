// fichero 40213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40213;

Registro40213 crear_registro40213(int id) {
    Registro40213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
