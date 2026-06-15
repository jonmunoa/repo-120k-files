// fichero 1985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1985;

Registro1985 crear_registro1985(int id) {
    Registro1985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
