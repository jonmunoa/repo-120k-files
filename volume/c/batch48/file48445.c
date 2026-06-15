// fichero 48445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48445;

Registro48445 crear_registro48445(int id) {
    Registro48445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
