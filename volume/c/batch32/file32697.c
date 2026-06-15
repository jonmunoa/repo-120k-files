// fichero 32697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32697;

Registro32697 crear_registro32697(int id) {
    Registro32697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
