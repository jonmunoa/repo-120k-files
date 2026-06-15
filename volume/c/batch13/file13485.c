// fichero 13485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13485;

Registro13485 crear_registro13485(int id) {
    Registro13485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
