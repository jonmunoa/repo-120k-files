// fichero 35721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35721;

Registro35721 crear_registro35721(int id) {
    Registro35721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
