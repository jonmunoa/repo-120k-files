// fichero 7425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7425;

Registro7425 crear_registro7425(int id) {
    Registro7425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
