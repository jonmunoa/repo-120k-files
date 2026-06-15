// fichero 18465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18465;

Registro18465 crear_registro18465(int id) {
    Registro18465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
