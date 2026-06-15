// fichero 41393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41393;

Registro41393 crear_registro41393(int id) {
    Registro41393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
