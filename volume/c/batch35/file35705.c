// fichero 35705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35705;

Registro35705 crear_registro35705(int id) {
    Registro35705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
