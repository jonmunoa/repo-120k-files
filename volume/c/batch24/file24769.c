// fichero 24769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24769;

Registro24769 crear_registro24769(int id) {
    Registro24769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
