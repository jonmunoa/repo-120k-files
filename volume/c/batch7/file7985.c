// fichero 7985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7985;

Registro7985 crear_registro7985(int id) {
    Registro7985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
