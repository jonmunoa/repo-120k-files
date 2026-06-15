// fichero 36065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36065;

Registro36065 crear_registro36065(int id) {
    Registro36065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
