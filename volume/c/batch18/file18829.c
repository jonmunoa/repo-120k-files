// fichero 18829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18829;

Registro18829 crear_registro18829(int id) {
    Registro18829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
