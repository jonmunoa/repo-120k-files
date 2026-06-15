// fichero 661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro661;

Registro661 crear_registro661(int id) {
    Registro661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
