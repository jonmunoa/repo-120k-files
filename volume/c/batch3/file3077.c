// fichero 3077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3077;

Registro3077 crear_registro3077(int id) {
    Registro3077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
