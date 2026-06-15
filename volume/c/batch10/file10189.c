// fichero 10189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10189;

Registro10189 crear_registro10189(int id) {
    Registro10189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
