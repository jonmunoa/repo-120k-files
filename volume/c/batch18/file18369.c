// fichero 18369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18369;

Registro18369 crear_registro18369(int id) {
    Registro18369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
