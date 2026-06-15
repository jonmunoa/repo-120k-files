// fichero 8721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8721;

Registro8721 crear_registro8721(int id) {
    Registro8721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
