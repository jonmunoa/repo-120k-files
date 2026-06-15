// fichero 29921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29921;

Registro29921 crear_registro29921(int id) {
    Registro29921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
