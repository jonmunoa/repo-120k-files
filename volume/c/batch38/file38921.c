// fichero 38921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38921;

Registro38921 crear_registro38921(int id) {
    Registro38921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
