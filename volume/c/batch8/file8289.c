// fichero 8289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8289;

Registro8289 crear_registro8289(int id) {
    Registro8289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
