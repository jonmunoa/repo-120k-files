// fichero 36549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36549;

Registro36549 crear_registro36549(int id) {
    Registro36549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
