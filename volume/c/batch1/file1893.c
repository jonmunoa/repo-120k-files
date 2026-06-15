// fichero 1893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1893;

Registro1893 crear_registro1893(int id) {
    Registro1893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
