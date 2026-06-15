// fichero 1965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1965;

Registro1965 crear_registro1965(int id) {
    Registro1965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
