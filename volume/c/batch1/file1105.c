// fichero 1105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1105;

Registro1105 crear_registro1105(int id) {
    Registro1105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
