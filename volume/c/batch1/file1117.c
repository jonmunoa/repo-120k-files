// fichero 1117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1117;

Registro1117 crear_registro1117(int id) {
    Registro1117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
