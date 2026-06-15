// fichero 1737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1737;

Registro1737 crear_registro1737(int id) {
    Registro1737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
