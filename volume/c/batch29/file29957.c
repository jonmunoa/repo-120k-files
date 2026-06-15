// fichero 29957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29957;

Registro29957 crear_registro29957(int id) {
    Registro29957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
