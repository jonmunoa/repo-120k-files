// fichero 41289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41289;

Registro41289 crear_registro41289(int id) {
    Registro41289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
