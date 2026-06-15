// fichero 30353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30353;

Registro30353 crear_registro30353(int id) {
    Registro30353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
