// fichero 41169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41169;

Registro41169 crear_registro41169(int id) {
    Registro41169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
