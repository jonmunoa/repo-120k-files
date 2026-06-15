// fichero 30865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30865;

Registro30865 crear_registro30865(int id) {
    Registro30865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
