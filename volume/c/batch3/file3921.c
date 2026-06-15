// fichero 3921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3921;

Registro3921 crear_registro3921(int id) {
    Registro3921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
