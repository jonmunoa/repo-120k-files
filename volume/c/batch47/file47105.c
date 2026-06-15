// fichero 47105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47105;

Registro47105 crear_registro47105(int id) {
    Registro47105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
