// fichero 35125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35125;

Registro35125 crear_registro35125(int id) {
    Registro35125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
