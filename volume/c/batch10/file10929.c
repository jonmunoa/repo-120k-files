// fichero 10929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10929;

Registro10929 crear_registro10929(int id) {
    Registro10929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
