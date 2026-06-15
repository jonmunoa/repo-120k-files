// fichero 8465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8465;

Registro8465 crear_registro8465(int id) {
    Registro8465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
