// fichero 24961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24961;

Registro24961 crear_registro24961(int id) {
    Registro24961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
