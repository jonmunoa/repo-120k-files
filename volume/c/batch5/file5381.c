// fichero 5381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5381;

Registro5381 crear_registro5381(int id) {
    Registro5381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
