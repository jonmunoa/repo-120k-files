// fichero 44053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44053;

Registro44053 crear_registro44053(int id) {
    Registro44053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
