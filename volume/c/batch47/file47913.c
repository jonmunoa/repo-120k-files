// fichero 47913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47913;

Registro47913 crear_registro47913(int id) {
    Registro47913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
