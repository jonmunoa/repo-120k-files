// fichero 5661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5661;

Registro5661 crear_registro5661(int id) {
    Registro5661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
