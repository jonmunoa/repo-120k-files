// fichero 17929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17929;

Registro17929 crear_registro17929(int id) {
    Registro17929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
