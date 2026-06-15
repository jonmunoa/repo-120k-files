// fichero 3317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3317;

Registro3317 crear_registro3317(int id) {
    Registro3317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
