// fichero 12705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12705;

Registro12705 crear_registro12705(int id) {
    Registro12705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
