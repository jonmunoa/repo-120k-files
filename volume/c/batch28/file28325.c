// fichero 28325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28325;

Registro28325 crear_registro28325(int id) {
    Registro28325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
