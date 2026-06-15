// fichero 14125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14125;

Registro14125 crear_registro14125(int id) {
    Registro14125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
