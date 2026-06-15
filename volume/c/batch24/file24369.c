// fichero 24369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24369;

Registro24369 crear_registro24369(int id) {
    Registro24369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
