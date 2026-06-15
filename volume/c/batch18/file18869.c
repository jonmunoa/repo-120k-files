// fichero 18869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18869;

Registro18869 crear_registro18869(int id) {
    Registro18869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
