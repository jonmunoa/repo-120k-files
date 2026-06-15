// fichero 16289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16289;

Registro16289 crear_registro16289(int id) {
    Registro16289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
