// fichero 2921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2921;

Registro2921 crear_registro2921(int id) {
    Registro2921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
