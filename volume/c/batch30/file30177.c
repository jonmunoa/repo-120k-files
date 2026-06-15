// fichero 30177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30177;

Registro30177 crear_registro30177(int id) {
    Registro30177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
