// fichero 32129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32129;

Registro32129 crear_registro32129(int id) {
    Registro32129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
