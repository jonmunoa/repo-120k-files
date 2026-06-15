// fichero 6649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6649;

Registro6649 crear_registro6649(int id) {
    Registro6649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
