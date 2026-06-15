// fichero 4993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4993;

Registro4993 crear_registro4993(int id) {
    Registro4993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
