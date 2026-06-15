// fichero 18837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18837;

Registro18837 crear_registro18837(int id) {
    Registro18837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
