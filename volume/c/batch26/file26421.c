// fichero 26421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26421;

Registro26421 crear_registro26421(int id) {
    Registro26421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
