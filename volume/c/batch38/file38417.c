// fichero 38417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38417;

Registro38417 crear_registro38417(int id) {
    Registro38417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
