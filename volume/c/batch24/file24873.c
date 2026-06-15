// fichero 24873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24873;

Registro24873 crear_registro24873(int id) {
    Registro24873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
