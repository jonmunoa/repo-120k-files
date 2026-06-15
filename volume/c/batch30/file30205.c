// fichero 30205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30205;

Registro30205 crear_registro30205(int id) {
    Registro30205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
