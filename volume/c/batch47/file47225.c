// fichero 47225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47225;

Registro47225 crear_registro47225(int id) {
    Registro47225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
