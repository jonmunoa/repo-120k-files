// fichero 8321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8321;

Registro8321 crear_registro8321(int id) {
    Registro8321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
