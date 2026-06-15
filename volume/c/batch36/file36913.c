// fichero 36913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36913;

Registro36913 crear_registro36913(int id) {
    Registro36913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
