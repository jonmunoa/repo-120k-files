// fichero 3333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3333;

Registro3333 crear_registro3333(int id) {
    Registro3333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
