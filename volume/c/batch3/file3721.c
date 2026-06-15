// fichero 3721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3721;

Registro3721 crear_registro3721(int id) {
    Registro3721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
