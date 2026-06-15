// fichero 49689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49689;

Registro49689 crear_registro49689(int id) {
    Registro49689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
