// fichero 1697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1697;

Registro1697 crear_registro1697(int id) {
    Registro1697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
