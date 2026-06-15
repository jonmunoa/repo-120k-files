// fichero 24661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24661;

Registro24661 crear_registro24661(int id) {
    Registro24661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
