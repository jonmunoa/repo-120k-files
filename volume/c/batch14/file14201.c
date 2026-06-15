// fichero 14201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14201;

Registro14201 crear_registro14201(int id) {
    Registro14201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
