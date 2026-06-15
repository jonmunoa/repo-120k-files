// fichero 38721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38721;

Registro38721 crear_registro38721(int id) {
    Registro38721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
