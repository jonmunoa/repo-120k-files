// fichero 20845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20845;

Registro20845 crear_registro20845(int id) {
    Registro20845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
