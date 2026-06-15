// fichero 353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro353;

Registro353 crear_registro353(int id) {
    Registro353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
