// fichero 2381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2381;

Registro2381 crear_registro2381(int id) {
    Registro2381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
