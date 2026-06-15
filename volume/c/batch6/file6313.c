// fichero 6313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6313;

Registro6313 crear_registro6313(int id) {
    Registro6313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
