// fichero 10501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10501;

Registro10501 crear_registro10501(int id) {
    Registro10501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
