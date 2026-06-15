// fichero 18569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18569;

Registro18569 crear_registro18569(int id) {
    Registro18569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
