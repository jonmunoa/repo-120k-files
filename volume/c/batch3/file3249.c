// fichero 3249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3249;

Registro3249 crear_registro3249(int id) {
    Registro3249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
