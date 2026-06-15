// fichero 20873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20873;

Registro20873 crear_registro20873(int id) {
    Registro20873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
