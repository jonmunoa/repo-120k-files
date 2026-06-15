// fichero 35885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35885;

Registro35885 crear_registro35885(int id) {
    Registro35885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
