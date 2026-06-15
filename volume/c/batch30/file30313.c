// fichero 30313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30313;

Registro30313 crear_registro30313(int id) {
    Registro30313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
