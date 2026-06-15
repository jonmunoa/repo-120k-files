// fichero 21317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21317;

Registro21317 crear_registro21317(int id) {
    Registro21317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
