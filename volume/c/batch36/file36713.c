// fichero 36713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36713;

Registro36713 crear_registro36713(int id) {
    Registro36713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
