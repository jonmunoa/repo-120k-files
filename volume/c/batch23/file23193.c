// fichero 23193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23193;

Registro23193 crear_registro23193(int id) {
    Registro23193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
