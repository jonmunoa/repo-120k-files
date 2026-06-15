// fichero 28189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28189;

Registro28189 crear_registro28189(int id) {
    Registro28189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
