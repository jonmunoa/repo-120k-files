// fichero 37869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37869;

Registro37869 crear_registro37869(int id) {
    Registro37869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
