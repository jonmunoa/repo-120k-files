// fichero 18209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18209;

Registro18209 crear_registro18209(int id) {
    Registro18209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
