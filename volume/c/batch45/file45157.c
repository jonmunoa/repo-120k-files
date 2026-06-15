// fichero 45157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45157;

Registro45157 crear_registro45157(int id) {
    Registro45157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
