// fichero 28985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28985;

Registro28985 crear_registro28985(int id) {
    Registro28985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
