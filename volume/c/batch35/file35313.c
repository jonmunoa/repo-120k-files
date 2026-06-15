// fichero 35313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35313;

Registro35313 crear_registro35313(int id) {
    Registro35313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
