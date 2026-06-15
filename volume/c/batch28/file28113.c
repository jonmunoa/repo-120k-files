// fichero 28113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28113;

Registro28113 crear_registro28113(int id) {
    Registro28113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
