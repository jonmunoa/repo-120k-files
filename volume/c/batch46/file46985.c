// fichero 46985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46985;

Registro46985 crear_registro46985(int id) {
    Registro46985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
