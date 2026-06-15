// fichero 38537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38537;

Registro38537 crear_registro38537(int id) {
    Registro38537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
