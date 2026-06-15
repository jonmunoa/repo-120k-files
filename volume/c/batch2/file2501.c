// fichero 2501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2501;

Registro2501 crear_registro2501(int id) {
    Registro2501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
