// fichero 44537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44537;

Registro44537 crear_registro44537(int id) {
    Registro44537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
