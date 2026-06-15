// fichero 30829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30829;

Registro30829 crear_registro30829(int id) {
    Registro30829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
