// fichero 20157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20157;

Registro20157 crear_registro20157(int id) {
    Registro20157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
