// fichero 23617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23617;

Registro23617 crear_registro23617(int id) {
    Registro23617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
