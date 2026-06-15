// fichero 19353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19353;

Registro19353 crear_registro19353(int id) {
    Registro19353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
