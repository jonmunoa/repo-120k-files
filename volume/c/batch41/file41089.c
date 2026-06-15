// fichero 41089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41089;

Registro41089 crear_registro41089(int id) {
    Registro41089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
