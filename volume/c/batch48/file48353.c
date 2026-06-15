// fichero 48353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48353;

Registro48353 crear_registro48353(int id) {
    Registro48353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
