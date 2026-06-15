// fichero 32445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32445;

Registro32445 crear_registro32445(int id) {
    Registro32445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
