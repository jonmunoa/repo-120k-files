// fichero 10829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10829;

Registro10829 crear_registro10829(int id) {
    Registro10829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
