// fichero 6157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6157;

Registro6157 crear_registro6157(int id) {
    Registro6157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
