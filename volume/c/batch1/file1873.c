// fichero 1873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1873;

Registro1873 crear_registro1873(int id) {
    Registro1873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
