// fichero 7241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7241;

Registro7241 crear_registro7241(int id) {
    Registro7241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
