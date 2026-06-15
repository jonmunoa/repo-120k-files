// fichero 38489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38489;

Registro38489 crear_registro38489(int id) {
    Registro38489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
