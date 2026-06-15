// fichero 31869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31869;

Registro31869 crear_registro31869(int id) {
    Registro31869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
