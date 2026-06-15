// fichero 20397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20397;

Registro20397 crear_registro20397(int id) {
    Registro20397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
