// fichero 45577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45577;

Registro45577 crear_registro45577(int id) {
    Registro45577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
