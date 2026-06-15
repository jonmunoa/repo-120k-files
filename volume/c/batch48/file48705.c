// fichero 48705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48705;

Registro48705 crear_registro48705(int id) {
    Registro48705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
