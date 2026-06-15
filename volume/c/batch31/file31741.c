// fichero 31741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31741;

Registro31741 crear_registro31741(int id) {
    Registro31741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
