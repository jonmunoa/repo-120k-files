// fichero 24721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24721;

Registro24721 crear_registro24721(int id) {
    Registro24721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
