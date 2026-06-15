// fichero 22193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22193;

Registro22193 crear_registro22193(int id) {
    Registro22193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
