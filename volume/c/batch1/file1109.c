// fichero 1109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1109;

Registro1109 crear_registro1109(int id) {
    Registro1109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
