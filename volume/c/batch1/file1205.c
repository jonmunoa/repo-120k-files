// fichero 1205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1205;

Registro1205 crear_registro1205(int id) {
    Registro1205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
