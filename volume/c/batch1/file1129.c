// fichero 1129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1129;

Registro1129 crear_registro1129(int id) {
    Registro1129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
