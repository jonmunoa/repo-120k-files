// fichero 30193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30193;

Registro30193 crear_registro30193(int id) {
    Registro30193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
