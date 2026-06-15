// fichero 3133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3133;

Registro3133 crear_registro3133(int id) {
    Registro3133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
