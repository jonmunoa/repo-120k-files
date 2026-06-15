// fichero 44845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44845;

Registro44845 crear_registro44845(int id) {
    Registro44845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
