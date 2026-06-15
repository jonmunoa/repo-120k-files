// fichero 44973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44973;

Registro44973 crear_registro44973(int id) {
    Registro44973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
