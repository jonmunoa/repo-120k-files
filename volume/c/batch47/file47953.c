// fichero 47953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47953;

Registro47953 crear_registro47953(int id) {
    Registro47953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
