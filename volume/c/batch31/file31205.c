// fichero 31205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31205;

Registro31205 crear_registro31205(int id) {
    Registro31205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
