// fichero 26869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26869;

Registro26869 crear_registro26869(int id) {
    Registro26869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
