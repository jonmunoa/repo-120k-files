// fichero 37465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37465;

Registro37465 crear_registro37465(int id) {
    Registro37465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
