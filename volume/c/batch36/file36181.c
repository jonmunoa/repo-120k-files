// fichero 36181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36181;

Registro36181 crear_registro36181(int id) {
    Registro36181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
