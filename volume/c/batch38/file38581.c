// fichero 38581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38581;

Registro38581 crear_registro38581(int id) {
    Registro38581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
