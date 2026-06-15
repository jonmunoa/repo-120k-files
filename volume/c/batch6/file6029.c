// fichero 6029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6029;

Registro6029 crear_registro6029(int id) {
    Registro6029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
