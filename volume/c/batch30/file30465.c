// fichero 30465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30465;

Registro30465 crear_registro30465(int id) {
    Registro30465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
