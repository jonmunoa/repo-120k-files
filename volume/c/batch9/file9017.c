// fichero 9017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9017;

Registro9017 crear_registro9017(int id) {
    Registro9017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
