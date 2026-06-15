// fichero 20769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20769;

Registro20769 crear_registro20769(int id) {
    Registro20769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
