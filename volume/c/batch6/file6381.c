// fichero 6381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6381;

Registro6381 crear_registro6381(int id) {
    Registro6381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
