// fichero 6733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6733;

Registro6733 crear_registro6733(int id) {
    Registro6733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
