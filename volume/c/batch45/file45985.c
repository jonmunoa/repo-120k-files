// fichero 45985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45985;

Registro45985 crear_registro45985(int id) {
    Registro45985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
