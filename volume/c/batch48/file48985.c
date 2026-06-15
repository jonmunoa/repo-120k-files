// fichero 48985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48985;

Registro48985 crear_registro48985(int id) {
    Registro48985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
