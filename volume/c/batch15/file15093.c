// fichero 15093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15093;

Registro15093 crear_registro15093(int id) {
    Registro15093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
