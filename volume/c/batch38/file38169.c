// fichero 38169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38169;

Registro38169 crear_registro38169(int id) {
    Registro38169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
