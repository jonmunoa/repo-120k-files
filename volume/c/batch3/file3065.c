// fichero 3065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3065;

Registro3065 crear_registro3065(int id) {
    Registro3065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
