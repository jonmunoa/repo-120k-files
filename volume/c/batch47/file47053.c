// fichero 47053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47053;

Registro47053 crear_registro47053(int id) {
    Registro47053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
