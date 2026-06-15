// fichero 19065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19065;

Registro19065 crear_registro19065(int id) {
    Registro19065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
