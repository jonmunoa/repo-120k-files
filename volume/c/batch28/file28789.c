// fichero 28789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28789;

Registro28789 crear_registro28789(int id) {
    Registro28789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
