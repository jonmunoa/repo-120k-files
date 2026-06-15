// fichero 12869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12869;

Registro12869 crear_registro12869(int id) {
    Registro12869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
