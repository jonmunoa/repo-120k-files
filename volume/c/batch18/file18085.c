// fichero 18085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18085;

Registro18085 crear_registro18085(int id) {
    Registro18085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
