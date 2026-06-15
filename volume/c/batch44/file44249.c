// fichero 44249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44249;

Registro44249 crear_registro44249(int id) {
    Registro44249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
