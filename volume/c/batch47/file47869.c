// fichero 47869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47869;

Registro47869 crear_registro47869(int id) {
    Registro47869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
