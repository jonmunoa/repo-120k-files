// fichero 36393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36393;

Registro36393 crear_registro36393(int id) {
    Registro36393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
