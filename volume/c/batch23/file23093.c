// fichero 23093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23093;

Registro23093 crear_registro23093(int id) {
    Registro23093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
