// fichero 49509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49509;

Registro49509 crear_registro49509(int id) {
    Registro49509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
