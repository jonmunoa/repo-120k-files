// fichero 1265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1265;

Registro1265 crear_registro1265(int id) {
    Registro1265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
