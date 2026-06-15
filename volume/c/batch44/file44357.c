// fichero 44357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44357;

Registro44357 crear_registro44357(int id) {
    Registro44357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
