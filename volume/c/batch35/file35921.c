// fichero 35921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35921;

Registro35921 crear_registro35921(int id) {
    Registro35921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
