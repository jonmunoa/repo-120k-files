// fichero 28913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28913;

Registro28913 crear_registro28913(int id) {
    Registro28913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
