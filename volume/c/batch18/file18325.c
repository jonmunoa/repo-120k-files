// fichero 18325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18325;

Registro18325 crear_registro18325(int id) {
    Registro18325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
