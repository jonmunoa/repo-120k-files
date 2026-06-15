// fichero 43985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43985;

Registro43985 crear_registro43985(int id) {
    Registro43985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
