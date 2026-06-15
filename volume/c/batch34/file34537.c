// fichero 34537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34537;

Registro34537 crear_registro34537(int id) {
    Registro34537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
