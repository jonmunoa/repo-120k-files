// fichero 48621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48621;

Registro48621 crear_registro48621(int id) {
    Registro48621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
