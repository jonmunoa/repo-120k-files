// fichero 44721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44721;

Registro44721 crear_registro44721(int id) {
    Registro44721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
