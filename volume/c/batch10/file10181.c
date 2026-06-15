// fichero 10181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10181;

Registro10181 crear_registro10181(int id) {
    Registro10181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
