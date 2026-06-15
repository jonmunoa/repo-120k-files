// fichero 12249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12249;

Registro12249 crear_registro12249(int id) {
    Registro12249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
