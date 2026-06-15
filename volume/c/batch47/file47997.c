// fichero 47997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47997;

Registro47997 crear_registro47997(int id) {
    Registro47997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
