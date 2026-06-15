// fichero 22877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22877;

Registro22877 crear_registro22877(int id) {
    Registro22877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
