// fichero 38705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38705;

Registro38705 crear_registro38705(int id) {
    Registro38705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
