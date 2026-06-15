// fichero 12317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12317;

Registro12317 crear_registro12317(int id) {
    Registro12317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
