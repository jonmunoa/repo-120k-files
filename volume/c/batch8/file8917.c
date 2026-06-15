// fichero 8917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8917;

Registro8917 crear_registro8917(int id) {
    Registro8917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
