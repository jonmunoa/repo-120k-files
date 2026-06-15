// fichero 41177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41177;

Registro41177 crear_registro41177(int id) {
    Registro41177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
