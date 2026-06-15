// fichero 34661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34661;

Registro34661 crear_registro34661(int id) {
    Registro34661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
