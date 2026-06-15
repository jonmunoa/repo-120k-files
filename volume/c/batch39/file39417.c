// fichero 39417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39417;

Registro39417 crear_registro39417(int id) {
    Registro39417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
