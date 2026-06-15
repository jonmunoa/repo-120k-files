// fichero 9409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9409;

Registro9409 crear_registro9409(int id) {
    Registro9409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
