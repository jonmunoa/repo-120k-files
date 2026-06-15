// fichero 8325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8325;

Registro8325 crear_registro8325(int id) {
    Registro8325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
