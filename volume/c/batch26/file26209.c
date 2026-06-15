// fichero 26209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26209;

Registro26209 crear_registro26209(int id) {
    Registro26209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
