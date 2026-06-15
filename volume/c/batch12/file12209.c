// fichero 12209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12209;

Registro12209 crear_registro12209(int id) {
    Registro12209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
