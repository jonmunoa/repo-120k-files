// fichero 6789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6789;

Registro6789 crear_registro6789(int id) {
    Registro6789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
