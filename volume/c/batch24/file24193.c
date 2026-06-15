// fichero 24193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24193;

Registro24193 crear_registro24193(int id) {
    Registro24193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
