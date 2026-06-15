// fichero 7085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7085;

Registro7085 crear_registro7085(int id) {
    Registro7085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
