// fichero 26001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26001;

Registro26001 crear_registro26001(int id) {
    Registro26001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
