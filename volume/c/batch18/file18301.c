// fichero 18301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18301;

Registro18301 crear_registro18301(int id) {
    Registro18301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
