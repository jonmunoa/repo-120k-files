// fichero 23169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23169;

Registro23169 crear_registro23169(int id) {
    Registro23169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
