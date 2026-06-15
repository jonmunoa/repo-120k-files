// fichero 44705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44705;

Registro44705 crear_registro44705(int id) {
    Registro44705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
