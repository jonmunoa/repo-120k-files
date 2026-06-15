// fichero 19869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19869;

Registro19869 crear_registro19869(int id) {
    Registro19869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
