// fichero 3993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3993;

Registro3993 crear_registro3993(int id) {
    Registro3993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
