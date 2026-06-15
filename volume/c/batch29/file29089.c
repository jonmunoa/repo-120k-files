// fichero 29089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29089;

Registro29089 crear_registro29089(int id) {
    Registro29089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
