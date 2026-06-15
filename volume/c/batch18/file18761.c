// fichero 18761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18761;

Registro18761 crear_registro18761(int id) {
    Registro18761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
