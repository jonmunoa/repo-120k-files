// fichero 40157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40157;

Registro40157 crear_registro40157(int id) {
    Registro40157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
