// fichero 27085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27085;

Registro27085 crear_registro27085(int id) {
    Registro27085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
