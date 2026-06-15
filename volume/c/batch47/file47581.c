// fichero 47581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47581;

Registro47581 crear_registro47581(int id) {
    Registro47581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
