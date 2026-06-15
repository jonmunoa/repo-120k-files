// fichero 26157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26157;

Registro26157 crear_registro26157(int id) {
    Registro26157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
