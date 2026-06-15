// fichero 41225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41225;

Registro41225 crear_registro41225(int id) {
    Registro41225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
