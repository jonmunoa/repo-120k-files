// fichero 19205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19205;

Registro19205 crear_registro19205(int id) {
    Registro19205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
