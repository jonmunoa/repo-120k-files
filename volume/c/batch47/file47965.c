// fichero 47965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47965;

Registro47965 crear_registro47965(int id) {
    Registro47965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
