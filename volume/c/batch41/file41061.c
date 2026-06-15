// fichero 41061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41061;

Registro41061 crear_registro41061(int id) {
    Registro41061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
