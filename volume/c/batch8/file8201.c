// fichero 8201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8201;

Registro8201 crear_registro8201(int id) {
    Registro8201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
