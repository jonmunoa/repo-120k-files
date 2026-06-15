// fichero 35157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35157;

Registro35157 crear_registro35157(int id) {
    Registro35157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
