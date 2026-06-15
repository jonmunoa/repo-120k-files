// fichero 40181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40181;

Registro40181 crear_registro40181(int id) {
    Registro40181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
