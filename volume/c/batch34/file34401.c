// fichero 34401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34401;

Registro34401 crear_registro34401(int id) {
    Registro34401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
