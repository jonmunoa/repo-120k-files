// fichero 28289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28289;

Registro28289 crear_registro28289(int id) {
    Registro28289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
