// fichero 7193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7193;

Registro7193 crear_registro7193(int id) {
    Registro7193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
