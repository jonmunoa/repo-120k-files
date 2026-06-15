// fichero 21721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21721;

Registro21721 crear_registro21721(int id) {
    Registro21721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
