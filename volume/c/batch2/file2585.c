// fichero 2585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2585;

Registro2585 crear_registro2585(int id) {
    Registro2585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
