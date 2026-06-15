// fichero 34209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34209;

Registro34209 crear_registro34209(int id) {
    Registro34209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
