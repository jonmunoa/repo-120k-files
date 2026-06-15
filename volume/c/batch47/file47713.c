// fichero 47713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47713;

Registro47713 crear_registro47713(int id) {
    Registro47713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
