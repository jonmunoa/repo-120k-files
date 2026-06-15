// fichero 19437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19437;

Registro19437 crear_registro19437(int id) {
    Registro19437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
