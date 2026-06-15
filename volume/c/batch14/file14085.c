// fichero 14085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14085;

Registro14085 crear_registro14085(int id) {
    Registro14085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
