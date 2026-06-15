// fichero 41585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41585;

Registro41585 crear_registro41585(int id) {
    Registro41585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
