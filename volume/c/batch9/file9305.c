// fichero 9305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9305;

Registro9305 crear_registro9305(int id) {
    Registro9305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
