// fichero 30113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30113;

Registro30113 crear_registro30113(int id) {
    Registro30113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
