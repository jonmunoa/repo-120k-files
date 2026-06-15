// fichero 34869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34869;

Registro34869 crear_registro34869(int id) {
    Registro34869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
