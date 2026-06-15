// fichero 28161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28161;

Registro28161 crear_registro28161(int id) {
    Registro28161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
