// fichero 20221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20221;

Registro20221 crear_registro20221(int id) {
    Registro20221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
