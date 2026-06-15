// fichero 38869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38869;

Registro38869 crear_registro38869(int id) {
    Registro38869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
