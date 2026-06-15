// fichero 32993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32993;

Registro32993 crear_registro32993(int id) {
    Registro32993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
