// fichero 49577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49577;

Registro49577 crear_registro49577(int id) {
    Registro49577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
