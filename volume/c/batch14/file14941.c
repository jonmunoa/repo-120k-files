// fichero 14941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14941;

Registro14941 crear_registro14941(int id) {
    Registro14941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
