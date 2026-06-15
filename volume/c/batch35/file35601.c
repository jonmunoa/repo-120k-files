// fichero 35601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35601;

Registro35601 crear_registro35601(int id) {
    Registro35601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
