// fichero 47821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47821;

Registro47821 crear_registro47821(int id) {
    Registro47821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
