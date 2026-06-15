// fichero 3877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3877;

Registro3877 crear_registro3877(int id) {
    Registro3877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
