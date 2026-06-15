// fichero 6193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6193;

Registro6193 crear_registro6193(int id) {
    Registro6193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
