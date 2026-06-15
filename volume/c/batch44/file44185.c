// fichero 44185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44185;

Registro44185 crear_registro44185(int id) {
    Registro44185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
