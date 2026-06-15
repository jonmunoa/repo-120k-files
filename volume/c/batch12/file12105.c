// fichero 12105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12105;

Registro12105 crear_registro12105(int id) {
    Registro12105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
