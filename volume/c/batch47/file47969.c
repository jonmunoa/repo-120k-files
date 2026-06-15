// fichero 47969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47969;

Registro47969 crear_registro47969(int id) {
    Registro47969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
