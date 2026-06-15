// fichero 37933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37933;

Registro37933 crear_registro37933(int id) {
    Registro37933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
