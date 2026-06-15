// fichero 829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro829;

Registro829 crear_registro829(int id) {
    Registro829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
