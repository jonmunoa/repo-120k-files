// fichero 34733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34733;

Registro34733 crear_registro34733(int id) {
    Registro34733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
