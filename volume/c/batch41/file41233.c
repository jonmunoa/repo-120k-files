// fichero 41233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41233;

Registro41233 crear_registro41233(int id) {
    Registro41233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
