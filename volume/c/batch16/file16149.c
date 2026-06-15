// fichero 16149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16149;

Registro16149 crear_registro16149(int id) {
    Registro16149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
