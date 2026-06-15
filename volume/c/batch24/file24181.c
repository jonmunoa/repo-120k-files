// fichero 24181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24181;

Registro24181 crear_registro24181(int id) {
    Registro24181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
