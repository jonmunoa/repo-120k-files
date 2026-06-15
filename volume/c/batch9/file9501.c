// fichero 9501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9501;

Registro9501 crear_registro9501(int id) {
    Registro9501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
