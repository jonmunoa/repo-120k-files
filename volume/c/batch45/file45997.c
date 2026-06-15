// fichero 45997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45997;

Registro45997 crear_registro45997(int id) {
    Registro45997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
