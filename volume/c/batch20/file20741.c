// fichero 20741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20741;

Registro20741 crear_registro20741(int id) {
    Registro20741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
