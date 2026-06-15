// fichero 49377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49377;

Registro49377 crear_registro49377(int id) {
    Registro49377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
