// fichero 18225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18225;

Registro18225 crear_registro18225(int id) {
    Registro18225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
