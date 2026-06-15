// fichero 41813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41813;

Registro41813 crear_registro41813(int id) {
    Registro41813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
