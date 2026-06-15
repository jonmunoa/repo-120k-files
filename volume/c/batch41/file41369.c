// fichero 41369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41369;

Registro41369 crear_registro41369(int id) {
    Registro41369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
