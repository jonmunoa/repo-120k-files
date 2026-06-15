// fichero 47313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47313;

Registro47313 crear_registro47313(int id) {
    Registro47313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
