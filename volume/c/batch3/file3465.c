// fichero 3465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3465;

Registro3465 crear_registro3465(int id) {
    Registro3465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
