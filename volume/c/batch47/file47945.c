// fichero 47945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47945;

Registro47945 crear_registro47945(int id) {
    Registro47945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
