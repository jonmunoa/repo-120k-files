// fichero 36873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36873;

Registro36873 crear_registro36873(int id) {
    Registro36873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
