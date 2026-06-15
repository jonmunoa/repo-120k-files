// fichero 3733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3733;

Registro3733 crear_registro3733(int id) {
    Registro3733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
