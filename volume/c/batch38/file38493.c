// fichero 38493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38493;

Registro38493 crear_registro38493(int id) {
    Registro38493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
