// fichero 22809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22809;

Registro22809 crear_registro22809(int id) {
    Registro22809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
