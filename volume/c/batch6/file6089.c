// fichero 6089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6089;

Registro6089 crear_registro6089(int id) {
    Registro6089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
