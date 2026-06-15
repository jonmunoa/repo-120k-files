// fichero 16821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16821;

Registro16821 crear_registro16821(int id) {
    Registro16821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
