// fichero 38193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38193;

Registro38193 crear_registro38193(int id) {
    Registro38193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
