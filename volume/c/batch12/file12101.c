// fichero 12101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12101;

Registro12101 crear_registro12101(int id) {
    Registro12101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
