// fichero 28205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28205;

Registro28205 crear_registro28205(int id) {
    Registro28205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
