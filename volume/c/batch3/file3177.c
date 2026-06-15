// fichero 3177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3177;

Registro3177 crear_registro3177(int id) {
    Registro3177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
