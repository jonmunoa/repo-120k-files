// fichero 3117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3117;

Registro3117 crear_registro3117(int id) {
    Registro3117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
