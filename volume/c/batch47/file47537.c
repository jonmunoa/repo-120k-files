// fichero 47537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47537;

Registro47537 crear_registro47537(int id) {
    Registro47537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
