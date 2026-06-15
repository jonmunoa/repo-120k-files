// fichero 3869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3869;

Registro3869 crear_registro3869(int id) {
    Registro3869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
