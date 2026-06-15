// fichero 47989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47989;

Registro47989 crear_registro47989(int id) {
    Registro47989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
