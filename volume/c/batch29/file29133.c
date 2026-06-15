// fichero 29133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29133;

Registro29133 crear_registro29133(int id) {
    Registro29133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
