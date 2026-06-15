// fichero 1041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1041;

Registro1041 crear_registro1041(int id) {
    Registro1041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
