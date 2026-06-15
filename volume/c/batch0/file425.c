// fichero 425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro425;

Registro425 crear_registro425(int id) {
    Registro425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
